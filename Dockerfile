FROM ubuntu:20.04

# --------------------------------------------------
ENV LC_ALL=en_US.UTF-8 \
  LANG=en_US.UTF-8 \
  LANGUAGE=en_US.UTF-8 \
  LD_LIBRARY_PATH=.:/usr/local/lib
# setup locale and timezone
RUN apt-get update && apt-get install -y --force-yes --no-install-recommends locales tzdata; \
  locale-gen en_US.UTF-8; \
  ln -fs /usr/share/zoneinfo/Asia/Shanghai /etc/localtime; \
  echo Asia/Shanghai > /etc/timezone; dpkg-reconfigure -f noninteractive tzdata; \
  ulimit -c unlimited; echo "* - nofile 6553600" >> /etc/security/limits.conf; \
  rm -rf /tmp/*; apt-get clean; rm -rf /var/lib/apt/lists/*;
# --------------------------------------------------

RUN apt-get update && apt-get install -y libgssapi-krb5-2

# ==================================================
WORKDIR /opt/feeder_huatai_insightudp/bin
CMD ["./feeder_huatai_insightudp"]

# --------------------------------------------------
RUN cd /opt/feeder_huatai_insightudp; mkdir conf log data tmp
COPY feeder_huatai_insightudp *.so* /opt/feeder_huatai_insightudp/bin/


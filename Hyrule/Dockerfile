FROM ubuntu:latest
ENV DEBIAN_FRONTEND=noninteractive

RUN apt update && apt upgrade -yq && \
    apt install gcc g++ binutils python3 python3-pip vim unrar zip unzip curl wget iputils-ping sudo sshpass file -yq

RUN useradd -m link
RUN mkdir /root/src
COPY /src/ /root/src

RUN chmod +x /root/src/init.sh && /root/src/init.sh && rm -rf /root/src

# 確保 link 使用者擁有 /home/link 的權限
RUN chown -R link:link /home/link && \
    chmod -R 755 /home/link

USER link
WORKDIR /home/link

EXPOSE 10000
ENV TERM=xterm-color

CMD ["/bin/bash"]

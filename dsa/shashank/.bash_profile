#
# ~/.bash_profile
#

[[ -f ~/.bashrc ]] && . ~/.bashrc

nitrogen --restore

startx
. "$HOME/.cargo/env"

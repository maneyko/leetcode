#!/usr/bin/env python3

"""
Need to have in ~/.vimrc::
    au FileType tex
          \ nnoremap <leader>c :silent exec "!echo >> /tmp/_listener"<CR><C-l>
"""

import os, sys

from whenchanged.whenchanged import WhenChanged


texfile = 'p7.cpp'
listener = '/tmp/_listener'
command = f'make p7 && ./p7'

if not os.path.exists(listener):
    with open(listener, 'wb'): pass

w = WhenChanged([listener], [command])
print(f"""Going to execute::

    {command}

Waiting for {listener!r} to change...""")
w.run()

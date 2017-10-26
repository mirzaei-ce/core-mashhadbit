from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for mashhadbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@mashhadbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )

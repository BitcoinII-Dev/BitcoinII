

BitcoinII Core integration/staging tree
=====================================

https://Bitcoin-II.org


What is BitcoinII Core?
---------------------

BitcoinII Core connects to the BitcoinII peer-to-peer network to download and fully
validate blocks and transactions. It also includes a wallet and graphical user
interface, which can be optionally built.

Further information about BitcoinII Core is available in the [doc folder](/doc).

License
-------

BitcoinII Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

As a "Sister Chain", BitcoinII currently follows the Bitcoin development and upgrade paths, and
will continue to do so unless development ceases on Bitcoin. (This is unlikely).

Testing
-------

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Translations
------------

BitcoinII uses Bitcoin Core's translations which are provided by Transifex.

**Important**: We do not accept translation changes as GitHub pull requests because the next
pull from Transifex would automatically overwrite them again.

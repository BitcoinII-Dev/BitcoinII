<p align="center">
  <a href="https://github.com/BitcoinII-Dev/BitcoinII/releases">
    <img src="https://img.shields.io/github/downloads/BitcoinII-Dev/BitcoinII/total?style=for-the-badge" alt="Downloads">
  </a>
  <a href="https://Bitcoin-II.org">
    <img src="https://img.shields.io/badge/Website-Online-brightgreen?logo=google-chrome&style=for-the-badge" alt="Website">
  </a>
  <a href="https://t.me/+mc19GB_d5yo3Yjg5">
    <img src="https://img.shields.io/badge/Telegram-Join%20Chat-blue?logo=telegram&style=for-the-badge" alt="Telegram">
  </a>
  <a href="https://reddit.com/r/BitcoinII">
    <img src="https://img.shields.io/reddit/subreddit-subscribers/BitcoinII?label=Reddit&style=for-the-badge" alt="Reddit">
  </a>
  <a href="https://x.com/bc2org">
    <img src="https://img.shields.io/badge/X-Follow-black?logo=twitter&style=for-the-badge" alt="X">
  </a>
</p>

BitcoinII Core integration/staging tree
=====================================


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

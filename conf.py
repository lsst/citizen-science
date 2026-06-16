# See the documenteer.toml for overrides of the Rubin user guide presets.

from documenteer.conf.guide import *

exclude_patterns.extend([
    r"project/templates/template-folder",
    ".env/**"
])

# This domain blocks Sphinx traffic and returns a 403 even if the links still work
linkcheck_ignore = [
    r"https://docutils\.sourceforge\.io/.*"
]

# The linkcheck script will erroneously throw errors on some URLs that prevent the default
# sphinx-build user agent, this config will prevent that default user agent from being
# sent with the request
user_agent = (
    "Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) "
    "AppleWebKit/537.36 (KHTML, like Gecko) "
    "Chrome/149.0.0.0 Safari/537.36"
)

mermaid_version = "10.3.0"

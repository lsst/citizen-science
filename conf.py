# See the documenteer.toml for overrides of the Rubin user guide presets.

from documenteer.conf.guide import *

exclude_patterns.extend([
    r"project/templates/template-folder",
])

mermaid_version = "10.3.0"

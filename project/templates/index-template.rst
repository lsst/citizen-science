.. This is a template rst file (.rst) within the Vera C. Rubin Observatory Documentation for Citizen Science. This template can be used for a directory's index.rst or other pages within the directory. This comment and proceeding blank line may be deleted after the file is copied and renamed within the destination directory.

.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Templates-Title-of-Index:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

##############
Title of index
##############

.. This section should provide a brief, top-level description of the page.

.. note::
    This is a template file. This note should be deleted when the section is properly populated.

This is a template for the index.rst of a directory.
If there are no levels beneath this one, make sure the last line containing the asterisk (*) of ``toctree`` is commented out.

.. toctree::
    :maxdepth: 2
    :titlesonly:
    :glob:

..    *

This template may also be used for other pages within the directory. In this case, feel free to remove the ``toctree``.

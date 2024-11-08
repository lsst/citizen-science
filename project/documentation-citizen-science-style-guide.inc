.. Review the README on instructions to contribute.
.. Review the style guide to keep a consistent approach to the documentation.
.. Static objects, such as figures, should be stored in the _static directory. Review the _static/README on instructions to contribute.
.. Do not remove the comments that describe each section. They are included to provide guidance to contributors.
.. Do not remove other content provided in the templates, such as a section. Instead, comment out the content and include comments to explain the situation. For example:
    - If a section within the template is not needed, comment out the section title and label reference. Do not delete the expected section title, reference or related comments provided from the template.
    - If a file cannot include a title (surrounded by ampersands (#)), comment out the title from the template and include a comment explaining why this is implemented (in addition to applying the ``title`` directive).

.. This is the label that can be used for cross referencing this file.
.. Recommended title label format is "Directory Name"-"Title Name" -- Spaces should be replaced by hyphens.
.. _Project-Documentation-Citizen-Science-Style-Guide:
.. Each section should include a label for cross referencing to a given area.
.. Recommended format for all labels is "Title Name"-"Section Name" -- Spaces should be replaced by hyphens.
.. To reference a label that isn't associated with an reST object such as a title or figure, you must include the link and explicit title using the syntax :ref:`link text <label-name>`.
.. A warning will alert you of identical labels during the linkcheck process.

.. This file does not contain a title so it can match formatting in another location (project/contributing.rst).
.. title:: Documentation for Citizen-Science Style Guide
.. #############################################
.. Documentation for Citizen-Science Style Guide
.. #############################################

.. This section should provide a brief, top-level description of the page.

.. Important::
    The information provided below is based on the `LSST DM reStructuredText style guide <https://developer.lsst.io/restructuredtext/style.html>`__.
	A style guide specific to Citizen Science will be provided at a later time.

The information below can help you create effective reStructuredText for the :doc:`Rubin Observatory Documentation for Citizen Science </index>`.

.. _Documentation-Citizen-Science-Style-Guide-Style-and-Voice:

Style and voice
---------------

This is user documentation, which is different from academic writing.
Here are some tips:

- Make sure that all of your writing is in the service of users.

- Write with the active voice and in the present tense as much as possible.

- Address the user directly (“you can…”).
  Never use “we” since that’s ambiguous.
  If “we” means “Rubin Observatory,” then name “Rubin Observatory.”
  If “we” means the user, then say “you.”
  Even in tutorials, don’t use “we” to refer to an imaginary writer assisting the user.

- Write simple, short sentences in short paragraphs.
  Chunk information with headers.

- Write confidently and precisely, yet also casually.

.. _Documentation-Citizen-Science-Style-Guide-File-Names:

File names
----------

Always use hyphens to separate words in directory and file names.
Do not use underscores or spaces.
This choice is based on the `Google Developer Documentation Style Guide <https://developers.google.com/style>`__ for search engine optimization.

Use all-lowercase for directory names unless it is appropriate otherwise (such as a common acronym like LSST).

.. _Documentation-Citizen-Science-Style-Guide-Titles-and-Headings:

Titles and headings
-------------------

Title case for titles is recommended.
Sentence case for headings is recommended.
Title case for labels in reStructuredText files is recommended.

Try not to use more than two levels of heading hierarchy.
Using more than two levels of hierarchy might suggest an information architecture issue.

Also keep in mind DM’s `reStructuredText heading styles <https://developer.lsst.io/restructuredtext/style.html#sections>`__.

.. _Documentation-Citizen-Science-Style-Guide-Links:

Links
-----

Never use "here" as link text.
Instead, make the relevant noun or phrase the link.

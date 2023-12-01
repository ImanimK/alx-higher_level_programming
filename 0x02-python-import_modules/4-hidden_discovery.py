#!/usr/bin/python3

if __name__ == "__main__":
    """Print all names defined by hidden_4 module."""
    import hidden_4
    import code

    # Create an interactive namespace using code.InteractiveConsole
    console = code.InteractiveConsole(locals=vars(hidden_4))

    # Get all names in the namespace
    all_names = console.locals.keys()

    # Filter and print names that don't start with '__'
    filtered_names = [name for name in sorted(all_names) if not name.startswith('__')]

    for name in filtered_names:
        print(name)


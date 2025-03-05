#!/usr/bin/awk -f

{
    if ($0 ~ /^\+$/) {
        print $0, "suma"
    } else if ($0 ~ /^\+\+$/) {
        print $0, "incr"
    } else if ($0 ~ /^[0-9]+$/) {
        print $0, "entero"
    } else if ($0 ~ /^[0-9]+\.[0-9]+$/) {
        print $0, "real"
    } else {
        print $0, "error"
    }
}

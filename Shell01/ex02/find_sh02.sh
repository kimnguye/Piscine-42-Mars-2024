find . -type f -name "*.sh" | xargs -I{} basename {} | cut -d '.' -f 1

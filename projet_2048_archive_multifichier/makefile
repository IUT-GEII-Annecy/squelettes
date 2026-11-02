# === Configuration ===
CC      = clang
CFLAGS  = -std=c11 -Wall -Wextra -Werror -g -Iheaders -Isources
LDLIBS  = -lcs50
PROG    = jeu_2048

# === Fichiers sources et objets ===
SRC := jeu_2048.c sources/affichage.c sources/deplacements.c
OBJ := $(patsubst %.c,build/%.o,$(SRC))
DEP := $(OBJ:.o=.d)

# === Règle principale ===
all: $(PROG)

# === Édition de liens ===
$(PROG): $(OBJ)
	$(CC) $(OBJ) $(LDLIBS) -o $@

# === Compilation avec dépendances automatiques ===
build/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# === Inclusion des dépendances ===
-include $(DEP)

# === Nettoyage ===
clean:
	rm -rf build $(PROG)

.PHONY: all clean

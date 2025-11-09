# --- Config ---
CC      = clang
CFLAGS  = -std=c11 -Wall -Wextra -Werror -g -Iheaders
LDLIBS  = -lcs50
PROG    = tacos

# --- Sources & objets ---
SRC := tacos.c sources/fonctions.c
OBJ := $(patsubst %.c,build/%.o,$(SRC))
DEP := $(OBJ:.o=.d)

# --- Règle par défaut ---
all: $(PROG)

# --- Édition de liens ---
$(PROG): $(OBJ)
	$(CC) $(OBJ) $(LDLIBS) -o $@

# --- Compilation avec dépendances automatiques ---
build/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# --- Inclusion des .d générés ---
-include $(DEP)

# --- Nettoyage ---
clean:
	rm -rf build $(PROG)

.PHONY: all clean

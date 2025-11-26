# --- Config ---
CC      = clang
CFLAGS  = -std=c11 -Wall -Wextra -Werror -g -Iheaders
LDLIBS  = -lcs50 -lm

# --- Sources ---
LIB_SRC := sources/geometrie.c
LIB_OBJ := $(patsubst %.c,build/%.o,$(LIB_SRC))

# Programmes disponibles (sans l'extension .c)
PROGRAMS := distance_deux_points distance_origine point_simple

# --- Règle par défaut ---
all: $(PROGRAMS)

# --- Édition de liens pour chaque programme ---
$(PROGRAMS): %: build/%.o $(LIB_OBJ)
	$(CC) $^ $(LDLIBS) -o $@

# --- Compilation avec dépendances automatiques ---
build/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

build/sources/%.o: sources/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# --- Inclusion des .d générés ---
-include $(wildcard build/*.d build/sources/*.d)

# --- Nettoyage ---
clean:
	rm -rf build $(PROGRAMS)

.PHONY: all clean

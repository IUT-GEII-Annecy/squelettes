# --- Config ---
CC      = clang
CFLAGS  = -std=c11 -Wall -Wextra -Werror -g -Iheaders
LDLIBS  = -lcs50
PROG    = tacos boulangerie

# --- Sources & objets ---
SRC_TACOS := tacos.c sources/boutique.c
OBJ_TACOS := $(patsubst %.c,build/%.o,$(SRC_TACOS))
DEP_TACOS := $(OBJ_TACOS:.o=.d)
SRC_BOULANGERIE := boulangerie.c sources/boutique.c
OBJ_BOULANGERIE := $(patsubst %.c,build/%.o,$(SRC_BOULANGERIE))
DEP_BOULANGERIE := $(OBJ_BOULANGERIE:.o=.d)

# --- Règle par défaut ---
all: $(PROG)

# --- Édition de liens ---
tacos: $(OBJ_TACOS)
	$(CC) $(OBJ_TACOS) $(LDLIBS) -o $@

boulangerie: $(OBJ_BOULANGERIE)
	$(CC) $(OBJ_BOULANGERIE) $(LDLIBS) -o $@

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

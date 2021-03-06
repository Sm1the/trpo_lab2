
#include <cstdio>
#include "board_start.h"
#include "board_print_plain.h"
#include "boardgenerate.h"
    int main() {
        printf("Welcome to the game \"Chess\".\n"
               "To do at least, enter in the console \"start position of the turn and end position of the move\"\n"
               "Be sure to indicate the sequence through the dash.\n");
        char deck[8][8];
        board_start(deck);
        while (1) {
            printf("\n");
            board_print_plain(deck);
            board(deck);
        }
    }


//https://github.com/trpo-2020-sandbox/merge-ff-Sm1the
//https://github.com/trpo-2020-sandbox/rebase-no-conflict-Sm1the
/*
git checkout - меняет рабочии ветки - git-checkout - Switch branches or restore working tree files
git branch - создание\список уже имеющихся\удаление - git-branch - List, create, or delete branches
git rebase - переносит коммиты из одной ветки в другую - git-rebase - Reapply commits on top of another base tip
git reset - сбрасывает хэд то удаконого состояния - git-reset - Reset current HEAD to the specified state

 */

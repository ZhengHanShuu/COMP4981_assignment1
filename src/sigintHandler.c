//
// Created by main on 11/02/24.
//

#include "sigintHandler.h"
#include <signal.h>
#include <stdio.h>

void sigintHandler(const int sig_num) {
  // Reset the signal handler to catch SIGINT next time.
  signal(SIGINT, sigintHandler);

  if (signal(SIGINT, sigintHandler) == SIG_ERR) {
    // Handle error
  }

  // NOLINTNEXTLINE
  printf("\nsigintHandler: Sigint overriden."
         "\nSignum: %d\n",
         sig_num);

  // TODO: server cleanup
}

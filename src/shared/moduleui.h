#ifndef SHARED_MODULEUI_H_
#define SHARED_MODULEUI_H_
#include "module.h"
#include <QDockWidget>

class ModuleUI : public QDockWidget {
public:
  ModuleUI();
  /*ModuleUI(ModuleUI &&) = default;*/
  /*ModuleUI(const ModuleUI &) = default;*/
  /*ModuleUI &operator=(ModuleUI &&) = default;*/
  /*ModuleUI &operator=(const ModuleUI &) = default;*/
  ~ModuleUI();

  void attachToModule(Module *mod);

private:
};

#endif // !SHARED_MODULEUI_H_

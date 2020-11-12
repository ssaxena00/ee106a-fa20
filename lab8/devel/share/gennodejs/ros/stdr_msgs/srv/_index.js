
"use strict";

let AddSoundSource = require('./AddSoundSource.js')
let DeleteThermalSource = require('./DeleteThermalSource.js')
let AddThermalSource = require('./AddThermalSource.js')
let LoadMap = require('./LoadMap.js')
let DeleteSoundSource = require('./DeleteSoundSource.js')
let RegisterGui = require('./RegisterGui.js')
let AddCO2Source = require('./AddCO2Source.js')
let MoveRobot = require('./MoveRobot.js')
let AddRfidTag = require('./AddRfidTag.js')
let DeleteRfidTag = require('./DeleteRfidTag.js')
let LoadExternalMap = require('./LoadExternalMap.js')
let DeleteCO2Source = require('./DeleteCO2Source.js')

module.exports = {
  AddSoundSource: AddSoundSource,
  DeleteThermalSource: DeleteThermalSource,
  AddThermalSource: AddThermalSource,
  LoadMap: LoadMap,
  DeleteSoundSource: DeleteSoundSource,
  RegisterGui: RegisterGui,
  AddCO2Source: AddCO2Source,
  MoveRobot: MoveRobot,
  AddRfidTag: AddRfidTag,
  DeleteRfidTag: DeleteRfidTag,
  LoadExternalMap: LoadExternalMap,
  DeleteCO2Source: DeleteCO2Source,
};

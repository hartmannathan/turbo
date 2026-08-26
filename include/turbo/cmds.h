#ifndef TURBO_CMDS_H
#define TURBO_CMDS_H

namespace turbo {

// Commands used by the library whose actual numeric value must be defined by
// the application in order to avoid collisions with any other commands it
// might be using.
//
// Commands not used by the application can be simply assigned the value '0'.

struct TurboCommands
{
    // Commands that can be disabled (must be in the range 100..255).
    ushort cmSelUppercase {0};
    ushort cmSelLowercase {0};
    ushort cmSelCapitalize {0};
};

} // namespace turbo

#endif // TURBO_CMDS_H

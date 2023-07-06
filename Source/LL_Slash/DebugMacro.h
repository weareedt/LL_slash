#pragma once
#include "DrawDebugHelpers.h"

#define DRAWDEBUGSPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 30, FColor::Red, true);
#define DRAWDEBUGSPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 30, FColor::Red, false, -1.f);
#define DRAWDEBUGLINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red,true, -1.f, 0,1.f);
#define DRAWDEBUGPOINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red,true);
#define DRAWDEBUGVECTOR(StartLocation, EndLocation) if (GetWorld()) \
                    {\
                        DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red,true, -1.f, 0,1.f); \
                        DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red,true); \
                    }
#pragma once

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	EnumCharState_Unequipped UMETA(DisplayName = "Unequipped"),
	EnumCharState_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-handed Weapon"),
	numCharState_EquippedTwoHandedWeapon UMETA(DisplayName = "Equipped Two-Handed Weapon")
};
#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass IBPChar_DigiClone.IBPChar_DigiClone_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBPChar_DigiClone_C : public UInterface
	{
	public:
		void SetIsTeleporting(bool bIsTeleporting);
		void StartProvoke();
		void OnDigicloneTeleport();
		void UpdateMaxTeleportRange();
		void DigiCloneThrowGrenade();
		void AutomagicallyRemoveDamageOverride();
		void AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int32_t Grade);
		void ReleaseDigiclone();
		void KillDigiCloneNow();
		void BlowUpDigiClone();
		void StopScalingDigiClone();
		void BeginScalingDigiClone();
		void Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

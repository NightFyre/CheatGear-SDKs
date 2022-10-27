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
	 * BlueprintGeneratedClass DamageData_PetSkag_Vortex.DamageData_PetSkag_Vortex_C
	 * Size -> 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
	 */
	class UDamageData_PetSkag_Vortex_C : public UDamageData_PetSkag_Vortex_Parent_C
	{
	public:
		void OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

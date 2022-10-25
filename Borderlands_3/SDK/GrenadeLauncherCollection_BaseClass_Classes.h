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
	 * BlueprintGeneratedClass GrenadeLauncherCollection_BaseClass.GrenadeLauncherCollection_BaseClass_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGrenadeLauncherCollection_BaseClass_C : public UEffectCollectionData
	{
	public:
		class UParticleSystem* GetParticleEffect(class UObject* ContextObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

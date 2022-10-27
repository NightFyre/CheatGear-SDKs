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
	 * BlueprintGeneratedClass ElementalEffectCollection_Railgun_Tracer.ElementalEffectCollection_Railgun_Tracer_C
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UElementalEffectCollection_Railgun_Tracer_C : public UElementalEffectCollectionData
	{
	public:
		void GetParticleEffectAndWwiseEvent(class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

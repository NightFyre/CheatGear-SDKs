﻿#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * DynamicClass AnimNotify_CarlSmoke.AnimNotify_CarlSmoke_C
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_CarlSmoke_C : public UAnimNotify
	{
	public:
		bool Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

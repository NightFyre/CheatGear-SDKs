#pragma once

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
	 * DynamicClass AnimNotify_MolotovIgnite.AnimNotify_MolotovIgnite_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnimNotify_MolotovIgnite_C : public UAnimNotify
	{
	public:
		unsigned char                                              UnknownData_6Y6M[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		bool Received_Notify(class USkeletalMeshComponent* bpp__MeshComp__pf, class UAnimSequenceBase* bpp__Animation__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

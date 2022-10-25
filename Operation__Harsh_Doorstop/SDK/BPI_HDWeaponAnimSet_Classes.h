#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_HDWeaponAnimSet_C : public UInterface
	{
	public:
		void ShouldUseMirroredLowerBodyLoco(bool* bOutUseMirrored);
		void GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		void GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass Interface_Operative_DigiClone.Interface_Operative_DigiClone_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface_Operative_DigiClone_C : public UInterface
	{
	public:
		void StartSeperationAnxietyNova(const struct FVector& Loc);
		void NotifyPanicButtonTriggered();
		void GetDigiCloneReference(class AActor** Digiclone);
		void Is_DigiClone_Active(bool* Return);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

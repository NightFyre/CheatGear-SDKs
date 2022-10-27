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
	 * BlueprintGeneratedClass BPI_OptionMenu.BPI_OptionMenu_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_OptionMenu_C : public UInterface
	{
	public:
		void GetDesiredVerticalAlignment(EVerticalAlignment* Alignment);
		void GetDesiredHorizontalAlignment(EHorizontalAlignment* Alignment);
		void GetSubMenuOptions(TArray<struct FFSubMenuOption>* SubOptions);
		void SetActiveSubMenuByIndex(int32_t SubMenuIndex);
		void HasSubMenus(bool* bSubMenuOptions);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

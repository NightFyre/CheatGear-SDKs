#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BPI_Setting.BPI_Setting_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Setting_C : public UInterface
	{
	public:
		void SetDefaultValue();
		void Refresh();
		void SetKeyValue(const class FString& KeyValueAsString);
		void GetKey(class FString* Key);
		void RevertToInitialValue();
		void SetConfigValue();
		void IsDirty(bool* IsDirty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

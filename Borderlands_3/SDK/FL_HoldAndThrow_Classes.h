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
	 * BlueprintGeneratedClass FL_HoldAndThrow.FL_HoldAndThrow_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_HoldAndThrow_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_HNT_Throw(class AActor* Projectile, class UObject* __WorldContext);
		void STATIC_HNT_Drop(class AActor* Projectile, class UObject* __WorldContext);
		void STATIC_HNT_Prime(class AActor* Projectile, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

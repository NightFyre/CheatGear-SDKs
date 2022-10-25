#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * WidgetBlueprintGeneratedClass WindowsContent.WindowsContent_C
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class UWindowsContent_C : public UCustomGUIWindow_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCustomGUIWindow_C*                                  _parentWindow;                                           // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UCustomGUIWindow_C*>                          _childrenWindows;                                        // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetChildrenWindows(TArray<class UCustomGUIWindow_C*>* childrenWidgets);
		void AddChildWindow(class UCustomGUIWindow_C* childWindowRef);
		void NotifyParentOnAlarmSwitchedOffOnContent();
		void NotifyParentOnAlarmRaisedOnContent();
		void NotifyParentOnWindowsContentSizeChanged();
		void SetParentWindow(class UCustomGUIWindow_C* parentWindowToSet);
		void GetParentWindow(class UCustomGUIWindow_C** parentWindow);
		void WindowContentSizeChanged();
		void ExecuteUbergraph_WindowsContent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

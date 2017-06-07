//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject
{
}

+ (id)sharedEditingDelegate;
- (id)undoManagerForWebView:(id)arg1;
- (void)webViewDidChangeSelection:(id)arg1;
- (void)webViewDidChangeTypingStyle:(id)arg1;
- (void)webViewDidEndEditing:(id)arg1;
- (void)webViewDidChange:(id)arg1;
- (void)webViewDidBeginEditing:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (_Bool)webView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (_Bool)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;
- (_Bool)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3;
- (_Bool)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;
- (_Bool)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(int)arg4 stillSelecting:(_Bool)arg5;
- (_Bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (_Bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (_Bool)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;
- (_Bool)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;
- (_Bool)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;

@end


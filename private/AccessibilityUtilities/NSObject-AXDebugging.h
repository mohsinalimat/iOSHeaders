//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (AXDebugging)
- (void)_ax_automationTreeDescription:(id)arg1 indentation:(long long)arg2;
- (id)ax_automationTreeDescription;
- (id)ax_accessibilityDescription;
- (id)ax_descriptionWithIndentation:(long long)arg1 includeAXInfo:(_Bool)arg2;
- (id)ax_recursiveDescriptionWithIndentation:(long long)arg1 includeLayers:(_Bool)arg2 includeAXInfo:(_Bool)arg3;
- (id)ax_recursiveDescriptionIncludingLayersAndAXInfo;
- (id)ax_recursiveDescriptionIncludingAXInfo;
- (id)ax_recursiveDescriptionIncludingLayers;
- (id)ax_recursiveDescription;
- (void)ax_initializeDebugging;
@end


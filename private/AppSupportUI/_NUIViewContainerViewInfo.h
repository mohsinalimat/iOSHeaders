//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NUIViewContainerViewInfo : NSObject
{
    struct nui_size_cache _sizeCache;
    struct UIEdgeInsets _customAlignmentInsets;
    double _customTopBaseline;
    double _customBottomBaseline;
    struct {
        unsigned int baselineRelativeInsets:1;
        unsigned int allowFastBaselines:1;
        unsigned int alsoInvalidateSuperview:1;
        unsigned int neverCacheSize:1;
    } _flags;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUSizer-Protocol.h>

@class NSString;

@interface NUSizer : NSObject <NUSizer>
{
    _Bool _flexible;
    _Bool _alwaysIntegral;
    NSString *_desc;
    CDUnknownBlockType _sizerBlock;
}

@property(readonly, nonatomic) _Bool alwaysIntegral; // @synthesize alwaysIntegral=_alwaysIntegral;
@property(readonly, nonatomic) _Bool flexible; // @synthesize flexible=_flexible;
@property(readonly, copy, nonatomic) CDUnknownBlockType sizerBlock; // @synthesize sizerBlock=_sizerBlock;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (struct CGRect)frameInBounds:(struct CGRect)arg1 cursor:(double)arg2 options:(struct NULayoutOptions)arg3 layoutContext:(id)arg4;
@property(readonly, copy) NSString *description;
- (id)initWithDescription:(id)arg1 flexible:(_Bool)arg2 sizerBlock:(CDUnknownBlockType)arg3;
- (id)initWithDescription:(id)arg1 sizerBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


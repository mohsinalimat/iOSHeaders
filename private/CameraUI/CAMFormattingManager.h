//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMFormattingManager : NSObject
{
    _Bool _wantsCustomKerning;
    _Bool _supportsVerticalText;
}

+ (id)sharedManager;
@property(readonly, nonatomic) _Bool supportsVerticalText; // @synthesize supportsVerticalText=_supportsVerticalText;
@property(readonly, nonatomic) _Bool wantsCustomKerning; // @synthesize wantsCustomKerning=_wantsCustomKerning;
- (id)init;
- (void)_commonCAMFormattingManagerInitialization;

@end


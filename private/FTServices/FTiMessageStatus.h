//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTiMessageStatus : NSObject
{
    _Bool _supportsiMessage;
    int _iMessageAllowedToken;
    _Bool _blockPost;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool blockPost; // @synthesize blockPost=_blockPost;
@property _Bool supportsiMessage; // @synthesize supportsiMessage=_supportsiMessage;
@property(nonatomic) int iMessageAllowedToken; // @synthesize iMessageAllowedToken=_iMessageAllowedToken;
- (_Bool)_noCache_iMessageAllowed;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_reload;
@property(readonly, nonatomic) _Bool iMessageSupported;
- (void)dealloc;
- (id)initPrivate;

@end


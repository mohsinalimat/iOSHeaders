//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString;

@protocol SKUIObjectInspector <NSObject>
@property(copy, nonatomic) NSString *information;
@property(copy, nonatomic) NSString *friendlyName;
- (void)exposePropertyWithFriendlyName:(NSString *)arg1 value:(id)arg2;
- (void)endSection;
- (void)beginSectionWithFriendlyName:(NSString *)arg1;
@end


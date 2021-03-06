//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/BSXPCCoding-Protocol.h>

@class NSString, NSURL;

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding>
{
    NSString *_title;
    NSString *_bundleId;
    NSURL *_URL;
}

+ (id)systemNavigationActionContextWithURL:(id)arg1;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 bundleId:(id)arg2;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


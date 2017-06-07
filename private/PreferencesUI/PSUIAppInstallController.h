//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACUIAppDescription, NSString, NSURL;

@interface PSUIAppInstallController : NSObject
{
    ACUIAppDescription *_appDescription;
    int _installState;
    NSString *_teamID;
    NSString *_bundleID;
    NSURL *_installURL;
}

@property(retain, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) int installState; // @synthesize installState=_installState;
- (void).cxx_destruct;
- (id)specifier;
- (void)installButtonTapped:(id)arg1;
- (void)load;
- (id)imageFromURL:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithAppID:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, NSURL, PKPrintSettings;

@interface PKJob : NSObject
{
    long long number;
    long long remoteJobId;
    long long mediaProgress;
    long long mediaSheets;
    long long mediaSheetsCompleted;
    NSString *printerDisplayName;
    long long printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    long long state;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
    NSData *thumbnailImage;
    NSURL *_printerURI;
    NSString *_PIN;
}

+ (id)jobs;
+ (id)currentJob;
@property(retain, nonatomic) NSString *PIN; // @synthesize PIN=_PIN;
@property(retain, nonatomic) NSURL *printerURI; // @synthesize printerURI=_printerURI;
@property(retain, nonatomic) NSData *thumbnailImage; // @synthesize thumbnailImage;
@property(retain, nonatomic) NSDate *timeAtProcessing; // @synthesize timeAtProcessing;
@property(retain, nonatomic) NSDate *timeAtCreation; // @synthesize timeAtCreation;
@property(retain, nonatomic) NSDate *timeAtCompleted; // @synthesize timeAtCompleted;
@property(nonatomic) long long state; // @synthesize state;
@property(retain, nonatomic) PKPrintSettings *settings; // @synthesize settings;
@property(retain, nonatomic) NSString *printerLocation; // @synthesize printerLocation;
@property(nonatomic) long long printerKind; // @synthesize printerKind;
@property(retain, nonatomic) NSString *printerDisplayName; // @synthesize printerDisplayName;
@property(nonatomic) long long mediaSheetsCompleted; // @synthesize mediaSheetsCompleted;
@property(nonatomic) long long mediaSheets; // @synthesize mediaSheets;
@property(nonatomic) long long mediaProgress; // @synthesize mediaProgress;
@property(nonatomic) long long remoteJobId; // @synthesize remoteJobId;
@property(nonatomic) long long number; // @synthesize number;
@property(readonly, nonatomic) NSString *localizedJobOptions;
@property(readonly, nonatomic) NSString *localizedStatusString;
- (long long)update;
- (long long)cancel;

@end


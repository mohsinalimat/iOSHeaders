//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SoftwareUpdateServices/SUDescriptor.h>

@interface SUSUIFakeSUDescriptor : SUDescriptor
{
}

- (id)documentation;
- (_Bool)isDownloadableOverCellular;
- (_Bool)isDownloadable;
- (int)updateType;
- (unsigned long long)installationSize;
- (unsigned long long)preparationSize;
- (unsigned long long)downloadSize;
- (id)productBuildVersion;
- (id)productVersion;
- (id)productSystemName;
- (id)humanReadableUpdateName;
- (id)publisher;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSArray, NSURL;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings
{
    int _movieMode;
    FigCaptureMovieFileRecordingSettings *_movieRecordingSettings;
    NSURL *_movieURLForOriginalImage;
    NSArray *_movieLevelMetadataForOriginalImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *movieLevelMetadataForOriginalImage; // @synthesize movieLevelMetadataForOriginalImage=_movieLevelMetadataForOriginalImage;
@property(copy, nonatomic) NSURL *movieURLForOriginalImage; // @synthesize movieURLForOriginalImage=_movieURLForOriginalImage;
@property(copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings; // @synthesize movieRecordingSettings=_movieRecordingSettings;
@property(nonatomic) int movieMode; // @synthesize movieMode=_movieMode;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


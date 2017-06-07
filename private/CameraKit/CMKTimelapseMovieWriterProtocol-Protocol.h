//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/NSObject-Protocol.h>

@class CLLocation, NSArray, NSDate, NSString;

@protocol CMKTimelapseMovieWriterProtocol <NSObject>
- (void)writeMovieFromImageFiles:(NSArray *)arg1 visMetadataFiles:(NSArray *)arg2 startDate:(NSDate *)arg3 location:(CLLocation *)arg4 outputPath:(NSString *)arg5 transform:(struct CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(void (^)(_Bool, double))arg8;
@end


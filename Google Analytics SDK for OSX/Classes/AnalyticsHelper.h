//
//  AnalyticsHelper.h
//  Google Analytics SDK for OSX
//
//  Created by Noah Spitzer-Williams on 11/27/11.
//  http://github.com/noahsw/google-analytics-sdk-for-osx
//



@interface AnalyticsHelper : NSObject

+(BOOL) fireEvent: (NSString*)eventAction eventValue:(NSNumber*)eventValue;

@end

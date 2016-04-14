//
//  DetailViewController.h
//  test
//
//  Created by 张潮 on 16/4/14.
//  Copyright © 2016年 张潮. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


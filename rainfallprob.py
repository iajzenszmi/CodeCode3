def total_probability_rainfall():
    # Prior usage probabilities for each model
    P_M1 = 0.7
    P_M2 = 0.3

    # Conditional probabilities of rain given each model's prediction
    P_Rain_given_M1 = 0.9   # Accuracy of M1 when predicting rain
    P_Rain_given_M2 = 0.6   # Accuracy of M2 when predicting rain

    # Apply the Law of Total Probability
    P_Rain = (P_Rain_given_M1 * P_M1) + (P_Rain_given_M2 * P_M2)

    print("Overall probability of rainfall (P(Rain)) =", round(P_Rain, 4))

    return P_Rain

# Run the demo
if __name__ == "__main__":
    total_probability_rainfall()
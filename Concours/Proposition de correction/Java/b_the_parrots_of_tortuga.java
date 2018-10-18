
// Ce code résoud les test avancés et d'optimisation mais échoue le test basique

import java.util.*;

public class b_the_parrots_of_tortuga
{

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();

		String[] GN = line.split(" ");
		int G = Integer.parseInt(GN[0]); // Golds
		int N = Integer.parseInt(GN[1]); // nombre de vendeur

		String[] name = new String[N];
		String[] prix = new String[N];
		String[] Comm = new String[N];

		String nomVendeur = "Impossible";
		int nb = 0;
		int nbMax = 0;

		for (int j = 0; j < N; j++)
		{
			nb = 0;

			line = sc.nextLine();
			String[] NomPrixComm = line.split(" "); // line : "nom prix/peroquet commission"

			name[j] = (NomPrixComm[0]);
			prix[j] = (NomPrixComm[1]);
			Comm[j] = (NomPrixComm[2]);

			nb = (G - Integer.parseInt(Comm[j])) / Integer.parseInt(prix[j]);

			if (nbMax < nb)
			{
				nomVendeur = name[j];
				nbMax = nb;
			}
		}
		if (nb > 0)
			System.out.println(nbMax);
		System.out.println(nomVendeur);
		sc.close();
	}
}
